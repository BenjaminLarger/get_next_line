Dear guys,
This exercice reads a file line by line until the end. The buffersize can be given through the input command. 
The best way to achieve the purpose would be to use a constant buffersize of one for every lecture, but this is not accepted by the moulinette. 
Here you will have to use a static variable to stock the readed content as long as the function is called. Also you will have to stock at each call the first line you meet, and then move your static variable to the next line for the next function call.
Indeed, the static variable will allow you to save at each function call the state of the variable.
The tricky part here is to handle the memory leaks. My advice would be first to make sure that each time you allocate memory using malloc there is a freeing buffer at each possible exit of the static variable. Secoondly, I would recommand that each time you move the buffer, free the former static variable and allocate memory for a new one.
Good luck.
