DIM AS INTEGER N,M
INPUT N,M
DIM AS INTEGER A(N),J,P
A(0)=0
p=0
DO WHILE A(0)=0
   IF A(P)<=N-M+P THEN 
        IF P=M THEN
            FOR J=1 TO M
                PRINT A(J);
            NEXT J
            PRINT ,
            A(P)=A(P)+1
        ELSE
            P=P+1
            A(P)=A(P-1)+1
        END IF
    ELSE
        P=P-1
        A(P)=A(P)+1
    END IF
LOOP 
SLEEP