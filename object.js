var hotel = {
	name: 'Samburu Hotel',
	rooms: 40,
	booked: 25,
	location: 'Maralal',
	checkAvailability: function () {
		return this.rooms - this.booked;
	}
};

var elName = document.getElementById('hotelName');
elName.textContext = hotel.name;

var elRooms = document.getElementById('rooms');
elRooms.textContext = hotel.rooms;

var elLocation = document.getElementById('location');
elLocation.textContext =hotel.location;