var hotel = new Object();

hotel.name = 'Samburu Hotel';
hotel.rooms = 40;
hotel.booked = 25;
hotel.location = 'Maralal';
hotel.checkAvailability = function () {
	return this.rooms - this.booked;
};