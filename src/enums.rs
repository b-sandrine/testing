// Enums are types which have a few definite values
enum Movement {
    // variants
    Up,
    Down,
    Left,
    Right
}

fn move_Avatar(m: Movement){
    // Perform action depending on info
    // is actually the same as switch 
    match m {
        Movement::Up => println!("Avatar moving up"),
        Movement::Down => println!("Avatar moving down"),
        Movement::Left => println!("Avatar moving left"),
        Movement::Right => println!("Avatar moving right")
    }
}
pub fn run(){
    let avatar1 = Movement::Left;
    let avatar2 = Movement::Right;
    let avatar3 = Movement::Up;
    let avatar4 = Movement::Down;
    
    move_Avatar(avatar1);
    move_Avatar(avatar2);
    move_Avatar(avatar3);
    move_Avatar(avatar4);
}