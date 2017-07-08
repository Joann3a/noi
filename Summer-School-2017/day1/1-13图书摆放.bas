INPUT "N,M="; N, M
DIM AS INTEGER A(M)
FOR I = 0 TO M
    A(I)=I
NEXT I
S = 0
DO WHILE  A(0)=0
    S = S+1
    FOR I = 1 TO M
        PRINT A(I); 
    NEXT I
    PRINT
    K = M
    DO
        A(K) = A(K)+1
        F = 1
        DO WHILE  A(K)>N
            A(K)=1 
            K=K-1
            F = 0
        LOOP
        IF F = 1 THEN
            FOR P =1 TO M-1
                FOR Q = P + 1 TO M
                    IF A(P)=A(Q)  THEN K=M : F=0
                NEXT Q
            NEXT P
        END IF
     LOOP UNTIL F=1
LOOP
PRINT S
SLEEP
