grammar UDFLanguage;

/* Start Variable */
userField : numExpr  # NumExpression
          | strExpr  # StrExpression
          | EOF      # EndOfInput
          ;

// Possible expressions in order of precedence
numExpr : '-' numExpr                              # NegNumExpr
        | left=numExpr op=('*'|'/') right=numExpr  # MulDiv
        | left=numExpr op=('+'|'-') right=numExpr  # AddSub
        | '(' numExpr ')'                          # ParensNumExpr
        | 'ABS' '(' numExpr ')'                    # AbsValue
        | NUMBER_CONSTANT                          # NumConstant
        | FIELD_NAME                               # NumField
        ;

strExpr : left=strExpr '+' right=strExpr           # Concat
        | '(' strExpr ')'                          # ParensStrExpr
        | STRING_CONSTANT                          # StrConstant
        | FIELD_NAME                               # StrField
        ;

/* Tokens */
NUMBER_CONSTANT: [0-9]+ ('.' [0-9]+)?;
STRING_CONSTANT: '\'' [a-zA-Z0-9_][a-zA-Z0-9_]* '\'';
FIELD_NAME     : [a-zA-Z_][a-zA-Z0-9_]*;                // variable field name

COMMENT : '//' ~[\r\n]* -> skip;    // skip the rest of the line after comment (//)
WHITE_SPACE: [ \t\n]+ -> skip;      // skip spaces, tabs and newline characters