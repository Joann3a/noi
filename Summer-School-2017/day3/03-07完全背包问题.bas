DIM AS STRING FN
INPUT FN
OPEN FN FOR INPUT AS #1
DIM AS INTEGER M,N
INPUT #1,M,N
DIM AS INTEGER W(N),P(N),F(N,M),I,J
FOR I=1 TO N
    INPUT #1,W(I)
NEXT I 
FOR I=1 TO N
    INPUT #1,P(I)
NEXT I 


FOR I=1 TO N
    FOR J=1 TO M
        IF J<W(I) THEN 
            F(I,J)=F(I-1,J)
        ELSE
            IF F(I-1,J)>F(I,J-W(I))+P(I) THEN  
                F(I,J)=F(I-1,J)
            ELSE
                F(I,J)=F(I,J-W(I))+P(I)
            END IF
        END IF                
    NEXT J
NEXT I
PRINT F(N,M)
SLEEP
END 
