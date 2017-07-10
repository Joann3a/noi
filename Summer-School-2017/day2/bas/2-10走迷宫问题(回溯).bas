INPUT N
DIM AS INTEGER A(N,N),XX(100),YY(100),S(100),V(2,2)
FOR K=1 TO (N+1)\2
  FOR I=K TO N+1-K
    FOR J=K TO N+1-K    
      A(I,J)=K
    NEXT J
  NEXT I
NEXT K  
XX(1)=1
YY(1)=1
P=1
S(1)=0
V(1,1)=0:V(1,2)=1
V(2,1)=1:V(2,2)=0
K=1
DO
  I=S(P+1)
  DO
    I=I+1
    X=XX(P)+V(I,1)
    Y=YY(P)+V(I,2)
  LOOP UNTIL X>=1 AND X<=N AND Y>=1 AND Y<=N OR I=3
  IF I<=2 THEN
    P=P+1
    S(P)=I
    K=K+A(X,Y)
    XX(P)=X
    YY(P)=Y
    S(P+1)=0
    IF X=N AND Y=N THEN 
      F=-1
      FOR L=2 TO SQR(K)
        IF K MOD L=0 THEN F=0:EXIT FOR
      NEXT L
      IF F=-1 THEN DD=DD+1
      K=K-A(X,Y)
      P=P-1
    ENDIF
  ELSE
    P=P-1
    K=K-A(XX(P+1),YY(P+1))
  ENDIF
LOOP UNTIL P=0
PRINT DD
SLEEP
END
  