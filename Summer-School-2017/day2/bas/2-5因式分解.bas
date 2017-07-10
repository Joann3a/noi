DIM AS INTEGER N,S,P,I,T,J
INPUT N
DIM AS INTEGER A(N)
P=1 
S=1 
I=1 
T=0 
DO
    I=I+1 
    S=S*I
    IF S<=N AND I<N THEN
        A(P)=I         
        IF S=N THEN
            T=T+1
            PRINT  N;"=";A(1);
            FOR J = 2 TO P : PRINT "*"; A(J); : NEXT J : PRINT  
            S=S/I
            P=P-1
            I=A(p)
            S=S/I  
        ELSE
            I=A(P)-1 
            P=P+1
        END IF
    ELSE
        S=S/I
        P=P-1
        I=A(P)
        S=S/I
    END IF
LOOP UNTIL p=0
PRINT T
SLEEP
END
