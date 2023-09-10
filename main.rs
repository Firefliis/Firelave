use std::io;

fn main() {
    let secret_number = rand::thread_rng().gen_range(1..=100);
    let mut attempts = 0;

    println!("Welcome to the Guessing Game!");

    loop {
        let mut guess = String::new();
        println!("Enter your guess: ");
        io::stdin()
            .read_line(&mut guess)
            .expect("Failed to read line");

        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        attempts += 1;

        if guess == secret_number {
            println!("Congratulations! You guessed the correct number in {} attempts.", attempts);
            break;
        } else if guess < secret_number {
            println!("Try higher.");
        } else {
            println!("Try lower.");
        }
    }
}
use rand::Rng;

fn main() {
    let random_number = rand::thread_rng().gen_range(1..=100); // Generate a random number between 1 and 100
}
