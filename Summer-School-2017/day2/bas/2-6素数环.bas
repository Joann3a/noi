DIM AS INTEGER N,G,K,X,F,I
INPUT "N=";N
DIM AS INTEGER A(N)
G=0
K=1
A(K)=1
DO WHILE K>0 AND G=0
    IF K<=N AND A(K)<=N THEN
        F=-1
        IF K>1 THEN            
            X=A(K)+A(K-1)
            FOR I=2 TO SQR(X)
                IF X MOD I=0 THEN F=0
            NEXT I
            FOR I=1 TO K-1
                IF A(I)=A(K) THEN F=0
            NEXT I            
        END IF
        IF K=N THEN
            X=A(1)+A(N)
            FOR I=2 TO X\2
                IF X MOD I=0 THEN F=0
            NEXT I
        END IF        
        IF F=-1 THEN
            IF K=N THEN
                FOR I=1 TO N
                    PRINT A(I);
                NEXT I
                G=-1                
            ELSE
                K=K+1
                A(K)=1
            END IF
         ELSE
            A(K)=A(K)+1
        END IF
        
    ELSE
        K=K-1
        A(K)=A(K)+1
    END IF
    
LOOP
IF G=0 THEN PRINT "MEI YOU FANG AN!"
SLEEP
END
