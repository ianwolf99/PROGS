function Hotel(name,rooms,booked,location) {
	this.name = name;
	this.rooms = rooms;
	this.booked = booked;
	this.location = location;
	this.checkAvailability = function() {
		return this.rooms - this.booked;
	};
}

var SamburuHotel = new Hotel('Samburu Hotel',40,23,'Maralal');
var WambaHotel = new Hotel('Wamba Hotel',57,20,'Wamba');

var details1 = SamburuHotel.name