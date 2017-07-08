DIM AS INTEGER N,I,J,L,P,K,X1,Y1
INPUT N
DIM AS INTEGER A(N,N),B(8,2),X(N*N),Y(N*N),S(N*N)
FOR I = 1 TO 8
    FOR J = 1 TO 2
        READ B(I,J)
    NEXT J
NEXT I
DATA 1,2,1,-2,-1,2,-1,-2,2,1,2,-1,-2,1,-2,-1

FOR I=1 TO N
    FOR J=1 TO N
        FOR K=1 TO N
            FOR L=1 TO N
                A(K,L) = 0
            NEXT L
        NEXT K
        A(I,J)=1
        P=1 : X1=I : Y1=J : X(P)=X1 : Y(P)=Y1
        K = 0
        DO
            K=K+1
            IF K<= 8 THEN
                X1=X1+B(K, 1) : Y1=Y1+B(K,2)
                IF X1<=N AND Y1<=N AND X1>=1 AND Y1>=1 AND A(X1,Y1)<>0 THEN
                    S(P)=K
                    P=P+1
                    X(P)=X1 : Y(P)=Y1 : A(X1,Y1)=P : K=0
                END IF
            ELSE
                A(X1,Y1)= 0
                P=P-1
                X1=X(P) : Y1=Y(P) : K=S(P)
            END IF
        LOOP UNTIL P=0 OR P=N*N
        IF P=N*N THEN PRINT I; J
    NEXT J
NEXT I
SLEEP
 
