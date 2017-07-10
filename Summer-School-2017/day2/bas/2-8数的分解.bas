DIM AS INTEGER N,K,P,S,I,J,Y
INPUT N,K
DIM AS INTEGER A(K)
I=0
P=1
A(1)=1
S=A(1)
DO
    I=I+1
    IF S+I<=N AND I<=N THEN
        S=S+I
        P=P+1
        A(P)=I
        I=A(P)-1
        IF S=N AND P=K THEN 
            Y=Y+1
            PRINT  Y;":";N;"=";A(1);
            FOR J = 2 TO P : PRINT "+"; A(J); : NEXT J : PRINT  
        END IF            
    ELSE
        S=S-A(P)
        I=A(P)
        P=P-1
    END IF
LOOP UNTIL P<0
PRINT Y
SLEEP
