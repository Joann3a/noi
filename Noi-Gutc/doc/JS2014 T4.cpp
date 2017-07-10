


for (d1=0; d1<=6; d1++)  //或者：穷举和1、和2 
{
	d2=d1+1;  
	d3=d2+1;
	d4=d3+1;
	s+=d1+d2+d3+d4;
	for(d5=0; d5<=6; d5++)
	{
		d6=d5+1;
		d7=d6+1;
		d8=d7+1;
		s+=d5+d6+d7+d8;
		
		if ( sqrt(s)==int(sqrt(s)) ) n++;
		
		
	}
	
}
