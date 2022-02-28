    // vectors - Resizable arrays

    use std::mem;
pub fn run(){

    let mut numbers: Vec<i32> = vec![1,2,3,4];

    // Re-assign value
    numbers[2] = 20;

    // Pop off last value
    numbers.pop();


    println!("{:?}",numbers);

    // Get single value
    println!("Single value: {}",numbers[0]);

    // Get vector length

    println!("Vector length: {}", numbers.len());

    // vector are stack allocated
    // each element occupies 4 bytes
    println!("Vector occupies {} bytes", mem::size_of_val(&numbers));

    // Get slice. When we want from 0 to 2 elements
    let slice: &[i32] = &numbers[0..2];
    
    println!("Slice: {:?}",slice);

    // Loop through vector values
    for x in numbers.iter(){
        println!("Number: {}", x);
    } 

    // Loop and mutate values
    for x in numbers.iter_mut(){
        *x *= 2;
    }

    println!("Numbers Vec: {:?}",numbers);
}
