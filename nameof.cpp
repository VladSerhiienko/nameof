///Used to obtain the string name of a variable.

#define nameof(name) template_nameof((name), #name)

template <typename T>
const char* template_nameof(T test, const char* name)
{
    return name;
}

// int test = 0;
// std::cout << nameof(test) << std::endl;
// prints "test”