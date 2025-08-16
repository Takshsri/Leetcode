


const weatherForm = document.querySelector("#WeatherForm");
const CityInput = document.querySelector(".input-style");
const content = document.querySelector(".content");
const apiKey = "9f67e646c5e94a94dbadb59fba072354";

weatherForm.addEventListener("submit", async (event) => {
    event.preventDefault();

    const city = CityInput.value;
    if (city) {
        try {
            const weatherData = await getWeather(city);
            displayWeather(weatherData);
        } catch (error) {
            displayError("Unable to fetch weather data. Please try again.");
        }
    } else {
        displayError("Please enter a city.");
    }
});

async function getWeather(city) {
    const apiUrl = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}`;
    const response = await fetch(apiUrl);
    if (!response.ok) {
        throw new Error("Could not fetch weather data");
    }
    return await response.json();
}

function displayWeather(data) {
    const {
        name: city,
        main: { temp, humidity },
        weather: [{ description }],
    } = data;

    const temperatureInCelsius = (temp - 273.15).toFixed(2);

    content.textContent = "";
    content.style.display = "flex";

    const cityDisplay = document.createElement("h1");
    cityDisplay.textContent = `Weather in ${city}`;
    cityDisplay.classList.add("Temperature");

    const tempDisplay = document.createElement("p");
    tempDisplay.textContent = `Temperature: ${temperatureInCelsius}°C`;

    const humidityDisplay = document.createElement("p");
    humidityDisplay.textContent = `Humidity: ${humidity}%`;

    const descDisplay = document.createElement("p");
    descDisplay.textContent = `Condition: ${description}`;

    content.appendChild(cityDisplay);
    content.appendChild(tempDisplay);
    content.appendChild(humidityDisplay);
    content.appendChild(descDisplay);
}

function displayError(message) {
    const error = document.createElement("p");
    error.textContent = message;
    error.classList.add("ErrorDis");
    content.textContent = "";
    content.style.display = "flex";
    content.appendChild(error);
}
