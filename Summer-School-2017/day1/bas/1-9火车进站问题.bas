INPUT n
DIM AS INTEGER a(n)
FOR i=1 TO n-1
    a(i)=0
NEXT i
a(n)=1
DO WHILE a(0)=0
    print "{";
    FOR i=1 TO n
        IF a(i)=1 THEN ? i;" ";
    NEXT i
    FOR i=n TO 1 STEP -1
        IF a(i)=0 THEN ? i;" ";
    NEXT i
    print "}"
    s=s+1
    k=n-1
    DO WHILE a(k)=1
        a(k)=0
        k=k-1
    LOOP
    a(k)=1
LOOP
print "s=";s
SLEEP
END