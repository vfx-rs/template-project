use project::Adder;

#[test]
fn test_create_succeeds() {
    Adder::new(1, 2);
}

#[test]
fn test_add_succeeds() {
    for (a, b, expected) in [(1, 2, 3), (2, 1, 3), (10, 10, 20), (-1, 1, 0)] {
        let adder = Adder::new(a, b);
        assert_eq!(adder.add(), expected);
    }
}

#[test]
fn test_print_succeeds() {
    for (a, b) in [(1, 2), (2, 1), (10, 10), (-1, 1)] {
        let adder = Adder::new(a, b);
        adder.print_add();
    }
}
