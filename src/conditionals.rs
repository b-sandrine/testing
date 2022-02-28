pub fn run(){
    let age = 30;
    let check_id = true;
    let knows_person_of_age = false;
    // if ... else
    if age >= 21 && check_id || knows_person_of_age {
        println!("Bartender: What would you like to drink?");
    }
    else if age < 21 && check_id{
        println!("Bartender: Sorry, you have to leave");
    }
    else{
       println!("Bartender: I'll need to see your ID"); 
    }

    // Shorthand If

    let is_of_age = if age >=20 { true } else { false };
    println!("{}",is_of_age);
}