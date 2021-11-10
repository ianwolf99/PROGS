//create the template with objects properties and method
//constructor function
function Hotel(name,rooms,booked,location) {
	
	this.name = name;
	this.rooms = rooms;
	this.booked = booked;
	this.location = location;

	this.checkAvailability = function() {
		return this.rooms - this.booked;
	};
}

var WambaHotel = new Hotel('Wamba Hotel',57,23,'Wamba');
var SamburuHotel = new Hotel('Samburu Hotel',40,20,'Maralal');
