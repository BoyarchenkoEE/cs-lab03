void
find_minmax(vector<double> numbers, double& min, double& max)
{
    min = numbers[0];
    max = numbers[0];
    for (double number : numbers)
    {
        if (max < number)
            max = number;
        if (min > number)
            min = number;
    }
}
