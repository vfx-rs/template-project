use cppmm_build::{build, Dependency};

fn main() {
    build(
        "PROJECT_NAME",
        MAJOR_VERSION,
        MINOR_VERSION,
        &vec![Dependency {
            name: "project",
            definitions: vec![("BUILD_TESTING", "OFF"), ("BUILD_SHARED_LIBS", "ON")],
        }],
    );
}
