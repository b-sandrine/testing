pub fn run(){
    println!("Hello from print.rs");
    /* this format throws an error
    println!(5);

    The best way to print it is as follows
    */
    println!("Number: {} ", 1);

    //basic formating

    println!("Hello, first name {} lastname {}", "sandrine" , "dushime");

    //positional arguments

    println!("{0} is from {1} and {0} likes to {2}", "sandrine", "Rusizi", "code");

    //named arguments

    println!("{name} likes to play {activity}",name = "John", activity="Volley ball");

    //placeholder traits
    println!("Binary: {:b} Hex: {:x} Octal: {:o}", 10, 10, 10);

    // placceholder for debub trait meaning if you want to print the entire array

    println!("{:?}", (12, true, "hello"));

    //besic math

    println!("10 + 10 = {}", 10+10);
}