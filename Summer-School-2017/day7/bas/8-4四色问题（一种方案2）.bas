DECLARE SUB MAPCOLOR 
DIM SHARED S(100) AS INTEGER
DIM SHARED R(100,100) AS INTEGER
DIM SHARED N AS INTEGER
N=7
DIM A AS INTEGER
DIM B AS INTEGER
DATA 0,1,0,0,0,0,1
DATA 1,0,1,1,1,1,1
DATA 0,1,0,1,0,0,0
DATA 0,1,1,0,1,0,0
DATA 0,1,0,1,0,1,0
DATA 0,1,0,0,1,0,1
DATA 1,1,0,0,0,1,0
FOR A=1 TO N   '����ʡ֮����� 
    FOR  B=1  TO  N 
      READ R(A,B)
    NEXT B
NEXT A
FOR  A=1   TO  N   '����������� 
   FOR  B=1  TO  N
      PRINT R(A,B);
   NEXT B
   PRINT
NEXT A
MAPCOLOR   '����Ϳɫ���� 
FOR  A=1  TO  N    '����� 
    PRINT A;":";S(A),
NEXT A
SLEEP
END
SUB MAPCOLOR
DIM X AS INTEGER
DIM Y AS INTEGER
DIM K AS INTEGER
S(1)=1    '��ʼ�� 
X=2
Y=1
DO WHILE X<=N
    DO WHILE (Y<=4) AND (X<=N)
        K=1
        DO WHILE K<X AND S(K)*R(X,K)<>Y 
            K=K+1
        LOOP
        IF K<X THEN 
            Y=Y+1  '��̽��һ����ɫ
        ELSE
            S(X)=Y    '������Ϳ Y ��ɫ 
            X=X+1     '׼����̽��һ������ 
            Y=1   '��ɫ���¸�ֵ
        ENDIF
        IF  Y>4  THEN    ' ���ݵ���һ��ʡ
           X=X-1  
           Y=S(X)+1   '������ɫֵ 
         ENDIF
    LOOP
LOOP
END SUB