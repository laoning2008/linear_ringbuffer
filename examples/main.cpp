#include <linear_ringbuffer.hpp>

int main(int argc, char** argv) {
    linear_ringbuffer rb;
    FILE* f = fopen("input.dat", "r");
    ssize_t n = ::read(fileno(f), rb.write_head(), rb.free_size());
    rb.commit(n);
    
    return 0;
}

