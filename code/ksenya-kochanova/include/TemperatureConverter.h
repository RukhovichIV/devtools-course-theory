class TemperatureŅonverter
{
public:
    TemperatureŅonverter();
    virtual ~TemperatureŅonverter();

    double CelsiyToKelvin(double temp);
    double CelsiyToFarengate(double temp);
	double CelsiyToNewton(double temp);

	double KelvinToCelsiy(double temp);
	double FarengateToCelsiy(double temp);
	double NewtonToCelsiy(double temp);


};