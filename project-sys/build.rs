use cppmm_build::{build, Dependency};

fn main() {
    build(
        "project",
        0,
        1,
        &vec![Dependency {
            name: "project",
            definitions: vec![("BUILD_TESTING", "OFF"), ("BUILD_SHARED_LIBS", "ON")],
        }],
    );
}
