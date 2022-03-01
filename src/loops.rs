// Loops - used to iterate until a condition is met

pub fn run(){
    let mut count = 0;
    
    // Infinite loop

    // loop{
    //     count += 1;
    //     println!("Number: {}",count);

    //     if count == 20{
    //         break;
    //     }
    // }

    // While loop (FizzBuzz is just a popular challenge. They use it in interviews and stuff like that). It is used to loop from 0 to 100
    // You print fizz if it is divisible by 3
    // you print buzz if it is divisible by 5.
    // you print fizzbuzz if it is divisible by both 3 and 5
    
    // while count <= 100 {
    //     if count % 15 == 0 {
    //         println!("fizzbuzz");
    //     }
    //     else if count % 3 == 0 {
    //         println!("fizz");
    //     }else if count % 5 == 0{
    //         println!("buzz");
    //     }
    //     else{
    //         println!("{}",count);
    //     }

    //     count += 1;
    // }

    // For range
    for x in 0..100 {
        if x % 15 == 0 {
            println!("fizzbuzz");
        }
        else if x % 3 == 0 {
            println!("fizz");
        }else if x % 5 == 0{
            println!("buzz");
        }
        else{
            println!("{}",x);
        }
    }
}