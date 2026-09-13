
class Vehicle {
	String vehicleNumber;
	String model;
	String companyName;
	int noOfWheels;
	double price;
	
	
	Vehicle() {
		this.vehicleNumber="NA";
		this.model = "NA";
		this.companyName = "NA";
		this.noOfWheels = 0;
		this.price = 0;
	}

	Vehicle(String vehicleNumber, String model, String companyName, int noOfWheels, double price) {
		this.vehicleNumber = vehicleNumber;
		this.model = model;
		this.companyName = companyName;
		this.noOfWheels = noOfWheels;
		this.price = price;
	}

	String getVehicleNumber() {
		return vehicleNumber;
	}

	void setVehicleNumber(String vehicleNumber) {
		this.vehicleNumber = vehicleNumber;
	}

	String getModel() {
		return model;
	}

	void setModel(String model) {
		this.model = model;
	}

	String getCompanyName() {
		return companyName;
	}

	void setCompanyName(String companyName) {
		this.companyName = companyName;
	}

	int getNoOfWheels() {
		return noOfWheels;
	}

	void setNoOfWheels(int noOfWheels) {
		this.noOfWheels = noOfWheels;
	}

	double getPrice() {
		return price;
	}

	void setPrice(double price) {
		this.price = price;
	}
	
	void display() {
		System.out.println("Vehicle Number: "+this.vehicleNumber);
		System.out.println("Model: "+this.model);
		System.out.println("Company Name: "+this.companyName);
		System.out.println("No of Wheels: "+this.noOfWheels);
		System.out.println("Price: "+this.price);
	}
}
class Bike extends Vehicle{
	int noOfStands;
	int noOfHelmets;
	String bikeCategory;
	
	Bike() {
		super();
		this.noOfStands = 0;
		this.noOfHelmets = 0;
		this.bikeCategory = "NA";
	}


	Bike(String vehicleNumber, String model, String companyName, int noOfWheels, double price, int noOfStands, int noOfHelmets, String bikeCategory) {
		super(vehicleNumber, model, companyName, noOfWheels, price);
		this.noOfStands = noOfStands;
		this.noOfHelmets = noOfHelmets;
		this.bikeCategory = bikeCategory;
	}

	int getNoOfHelmets() {
		return noOfHelmets;
	}


	void setNoOfHelmets(int noOfHelmets) {
		this.noOfHelmets = noOfHelmets;
	}


	int getNoOfStands() {
		return noOfStands;
	}

	void setNoOfStands(int noOfStands) {
		this.noOfStands = noOfStands;
	}

	String getBikeCategory() {
		return bikeCategory;
	}

	void setBikeCategory(String bikeCategory) {
		this.bikeCategory = bikeCategory;
	}
	
	void display() {
		super.display();
		System.out.println("No of Stands: "+this.noOfStands);
		System.out.println("No of Helmets: "+this.noOfHelmets);
		System.out.println("Bike Category: "+this.bikeCategory);
	}
}
class Car extends Vehicle{
	boolean hasPowerSteering;
	String driveMode;
	boolean parkingAssistSensors;
	
	Car() {
		super();
		this.hasPowerSteering = false;
		this.driveMode = "NA";
		this.parkingAssistSensors = false;
	}
	
	Car(String vehicleNumber, String model, String companyName, int noOfWheels, double price, boolean hasPowerSteering, String driveMode, boolean parkingAssistSensors) {
		super(vehicleNumber, model, companyName, noOfWheels, price);
		this.hasPowerSteering = hasPowerSteering;
		this.driveMode = driveMode;
		this.parkingAssistSensors = parkingAssistSensors;
	}

	boolean isHasPowerSteering() {
		return hasPowerSteering;
	}

	void setHasPowerSteering(boolean hasPowerSteering) {
		this.hasPowerSteering = hasPowerSteering;
	}

	String getDriveMode() {
		return driveMode;
	}

	void setDriveMode(String driveMode) {
		this.driveMode = driveMode;
	}

	boolean isParkingAssistSensors() {
		return parkingAssistSensors;
	}

	void setParkingAssistSensors(boolean parkingAssistSensors) {
		this.parkingAssistSensors = parkingAssistSensors;
	}
	
	void display() {
		super.display();
		System.out.println("Has Power Steering: "+this.hasPowerSteering);
		System.out.println("Drive Mode: "+this.driveMode);
		System.out.println("Has Parking Assist Sensors: "+this.parkingAssistSensors);
	}
	
}
class Bus extends Vehicle{
	int passengerCapacity;
	int standingCapacity;
	
	Bus() {
		super();
		this.passengerCapacity = 0;
		this.standingCapacity = 0;
	}
	
	Bus(String vehicleNumber, String model, String companyName, int noOfWheels, double price, int passengerCapacity, int standingCapacity) {
		super(vehicleNumber,model,companyName,noOfWheels,price);
		this.passengerCapacity = passengerCapacity;
		this.standingCapacity = standingCapacity;
	}

	int getPassengerCapacity() {
		return passengerCapacity;
	}

	void setPassengerCapacity(int passengerCapacity) {
		this.passengerCapacity = passengerCapacity;
	}

	int getStandingCapacity() {
		return standingCapacity;
	}

	void setStandingCapacity(int standingCapacity) {
		this.standingCapacity = standingCapacity;
	}
	
	void display() {
		super.display();
		System.out.println("Passenger Capacity: "+this.passengerCapacity);
		System.out.println("Standing Capacity: "+this.standingCapacity);
	}
}
class TestVehicle{
	public static void main(String[] args) {
		Bike bike1=new Bike("MH19AB1234","Pulsar 150","Bajaj",2,120000,2,2,"Sports");
		Car car1=new Car("MH19CD5678","Creta","Hyundai",4,1500000,true, "Automatic",true);
		Bus bus1=new Bus("MH19EF9012","Volvo 9400","Volvo",6,8000000,50,20);
		
		bike1.display();
		car1.display();
		bus1.display();
	}
}