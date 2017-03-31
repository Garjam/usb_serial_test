all:
	gcc Serial.c ttytest.c -o test	

clean:
	rm test
