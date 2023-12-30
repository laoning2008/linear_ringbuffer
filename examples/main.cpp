#include <linear_ringbuffer.hpp>
#include <io_buffer.hpp>
#include <ibuffer.hpp>

int main(int argc, char** argv) {
    linear_ringbuffer rb;
    FILE* f = fopen("input.dat", "r");
    auto n = fread(rb.write_head(), 1, rb.free_size(), f);
    rb.commit(n);
    
    return 0;
}

