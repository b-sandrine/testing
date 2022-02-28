// primitive str = Immutable fixed-length string somewhere in memory
// String = growable, heap-allocated data structure - use when you need to modift or own string data 

pub fn run() {
    // let hello = "Hello"; // this is immutable and fixed length

    let mut hello = String::from("hello "); // this is a growable one

    // Get  length
    println!("Length: {}", hello.len());
    
    // push char
    hello.push('W'); // it accepts only one character

    //push string
    hello.push_str("orld"); // It is for string
    // we won't be able to use these for a fixed size string

    // Capacity: The number of bytes it can store
    println!("Capacity: {}",hello.capacity());

    // check if empty
    println!("Is Empty: {}",hello.is_empty());

    // contains
    println!("Contains 'World' {}",hello.contains("World"));

    // Replace
    println!("Replace: {}", hello.replace("World","There"));

    // Loop through string by whitespace
    for word in hello.split_whitespace(){
        println!("{}", word);
    }
    println!("{}",hello);

    // create string with capacity
    let mut s = String::with_capacity(10);
    s.push('a');
    s.push('b');
    // how to write assertions(assertion testing) ex: (left == right) if something matches the other

    assert_eq!(2,s.len()); // if true nothing changes but it is not true they throw an error
    // assert_eq!(3,s.len()); // this will throw an error

    assert_eq!(10,s.capacity());
    println!("{}", s); 

}