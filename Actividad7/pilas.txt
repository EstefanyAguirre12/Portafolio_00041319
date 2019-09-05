ALGORITMO 1
s = initialize
int i;
int segundoelemento;

if( empty(s) ){
      pop(s)
}else if(!empty(s)){
	i=pop(s)
	if(empty(s) ){
		pop(s)
	}else{
		push(s, i)
		pop(s)
		segundoelemento=pop(s)
	}
}

ALGORITMO 2
s = initialize
int i;
int segundoelemento, primerelemento;

if( empty(s) ){
      pop(s)
}else if(!empty(s)){
	i=pop(s)
	if(empty(s) ){
		pop(s)
	}else{
		push(s, i)
		primerelemento = pop(s)
		segundoelemento = pop(s)
		push(s, segudoelemento)
		push(s, primerelemento)
	}
}