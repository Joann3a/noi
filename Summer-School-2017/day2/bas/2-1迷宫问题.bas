DIM AS INTEGER I,J,P,K
DIM AS INTEGER A(10, 9), V(2, 4), B(2, 100), C(100)
FOR I = 1 TO 10     
FOR J = 1 TO 9
    READ A(I, J)
  NEXT J
NEXT I
DATA 1,1,1,1,1,1,1,1,1
DATA 0,0,0,0,0,0,0,0,1
DATA 1,0,1,0,0,1,1,0,1
DATA 1,0,0,1,0,1,0,0,1
DATA 1,1,0,1,0,0,1,0,1
DATA 1,0,0,0,1,0,1,0,1
DATA 1,0,1,1,0,0,1,0,1
DATA 1,0,0,0,1,1,0,1,1
DATA 1,0,1,0,0,0,0,0,0
DATA 1,1,1,1,1,1,1,1,1
FOR I = 1 TO 4  
  READ V(1, I), V(2, I)
NEXT I
DATA 1,0,0,1,0,-1,-1,0
I = 2: J = 1   
P = 1: B(1, P) = I: B(2, P) = J: A(I, J) = 2
K = 0
DO
  K = K + 1
  IF K <= 4 THEN
    I = I + V(1, K):    J = J + V(2, K)
    IF A(I, J) = 0 THEN
      C(P) = K: P = P + 1: B(1, P) = I: B(2, P) = J: A(I, J) = 2: K = 0
      IF I = 9 AND J = 9 THEN
        FOR K = 1 TO P
         PRINT B(1, K); B(2, K),
        NEXT K:SLEEP: END
      END IF
    ELSE     
      I = B(1, P): J = B(2, P) 
    END IF
  ELSE
    A(I, J) = 1: P = P - 1: I = B(1, P): J = B(2, P): K = C(P)
  END IF
LOOP UNTIL P = 0
PRINT "NOT FIND"
SLEEP
