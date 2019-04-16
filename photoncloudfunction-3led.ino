
//assign LED's to photon pins

int red = D6; 

int yellow = D5; 

int blue = D4;

//Write a function that takes in a string argument to toggle corresponding LED on/off

int lightControl(String command);


void setup() 

{

//Expose the method to the cloud using the function call

    Particle.function("LED", lightControl);

	pinMode(red, OUTPUT);
	pinMode(yellow, OUTPUT);
	pinMode(blue, OUTPUT);

}


void loop() 

{

}

//Write a function that takes in a string argument to toggle corresponding LED on/off
int lightControl(String command)
{
    if (command == "red")
    {
        digitalWrite(red, HIGH);
    }
    
    if (command == "yellow")
    {
        digitalWrite(yellow, HIGH);
    }
    if (command == "blue")
    {
        digitalWrite(blue, HIGH);
    }
    if (command != "blue")
    {
        digitalWrite(blue, LOW);
    }
    if (command != "red")
    {
        digitalWrite(red, LOW);

    }
    if (command != "yellow")
    {

        digitalWrite(yellow, LOW);
    }
    
    //since the HTML page is only sending red, yellow, blue commands I guess I didn't really need to specify not blue, not red, not yellow as the function doesn't read the input like that. I could have written anything else and told it to switch off if anything other than red, yellow or blue was received.
    //I have left it like this for my own ease of reference though. 

}


