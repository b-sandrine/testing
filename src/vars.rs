//variables hold primitive data or references to data
//variables are immutable by default
//Rust is a blick-scoped language

pub fn run(){
    let name = "sandrine";
    let mut age = 17; 

    // for avoiding an error value never used
    println!("My name is {} and my age is {}", name, age);

    // we can not simply assign a new value to this value.
    // If you want to change its value just add key word mut in variable declaration 

    age = 18;
    println!("My name is {} and my age is {}", name, age);

    //define constant, you have to define its type and i32 means integer 32 bits

    const ID: i32 = 001;
    println!("ID: {}", ID);

    //assign multiple variables

    let(my_name, my_age) = ("Sandrine", 18);
    println!("{} is {} ", my_name, my_age);
}