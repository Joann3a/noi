DIM AS INTEGER N
INPUT N
DIM AS INTEGER A(N),S(N),I,K,P
FOR I=1 TO N
    A(I)=0
NEXT I

P=0:K=0
DO
    K=K+1
    IF K<=N THEN 
        IF A(K)=0 THEN 
            P=P+1
            S(P)=K
            IF P=N THEN
                FOR I=1 TO N
                    PRINT S(I);
                NEXT I
                PRINT ,
            END IF
            A(K)=K
            K=0
        END IF
    ELSE
        K=S(P)
        P=P-1
        A(K)=0
    END IF
LOOP UNTIL P<0
SLEEP