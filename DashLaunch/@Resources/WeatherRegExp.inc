[Variables]
Location=(?siU)\\"getSunV3LocationPointUrlConfig\\":.*{\\"location\\":{\\"latitude\\":(.*),\\"longitude\\":(.*),.*,\\"adminDistrict\\":(.*),\\"adminDistrictCode\\":(.*),.*,\\"country\\":(.*),\\"countryCode\\":(.*),.*,\\"displayName\\":(.*),.*}

CurrentObservations=(?siU)\\"getSunV3CurrentObservationsUrlConfig\\":.*{\\"cloudCeiling\\":.*,\\"cloudCoverPhrase\\":\\".*\\",\\"dayOfWeek\\":\\".*\\",\\"dayOrNight\\":\\".*\\",\\"expirationTimeUtc\\":.*,\\"iconCode\\":(.*),\\"iconCodeExtend\\":.*,\\"obsQualifierCode\\":.*,\\"obsQualifierSeverity\\":.*,\\"precip1Hour\\":.*,\\"precip6Hour\\":.*,\\"precip24Hour\\":.*,\\"pressureAltimeter\\":(.*),\\"pressureChange\\":(.*),\\"pressureMeanSeaLevel\\":.*,\\"pressureTendencyCode\\":.*,\\"pressureTendencyTrend\\":\\"(.*)\\",\\"relativeHumidity\\":(.*),\\"snow1Hour\\":.*,\\"snow6Hour\\":.*,\\"snow24Hour\\":.*,\\"sunriseTimeLocal\\":.*,\\"sunriseTimeUtc\\":.*,\\"sunsetTimeLocal\\":.*,\\"sunsetTimeUtc\\":.*,\\"temperature\\":(.*),\\"temperatureChange24Hour\\":.*,\\"temperatureDewPoint\\":(.*),\\"temperatureFeelsLike\\":(.*),\\"temperatureHeatIndex\\":.*,\\"temperatureMax24Hour\\":.*,\\"temperatureMaxSince7Am\\":.*,\\"temperatureMin24Hour\\":.*,\\"temperatureWindChill\\":.*,\\"uvDescription\\":\\"(.*)\\",\\"uvIndex\\":(.*),\\"validTimeLocal\\":\\"(.*)\\",\\"validTimeUtc\\":.*,\\"visibility\\":(.*),\\"windDirection\\":.*,\\"windDirectionCardinal\\":\\"(.*)\\",\\"windGust\\":(.*),\\"windSpeed\\":(.*),\\"wxPhraseLong\\":\\"(.*)\\",\\"wxPhraseMedium\\":.*,\\"wxPhraseShort\\":.*}

UpdateTimeZone=(?siU)\\"getSunV3CurrentDateTimeByGeocodeUrlConfig\\":{\\"geocode:.*\\":{.*,\\"data\\":{\\"dateTime\\":\\".*\\",\\"ianaTimeZone\\":\\".*\\",\\"timeZoneAbbreviation\\":\\"(.*)\\"}

DailyForecastMOON=(?siU)\\"getSunV3DailyForecastWithHeadersUrlConfig\\":.*{.*\\"moonPhase\\":.\\"(.*)\\",.*,\\"moonPhaseCode\\":.*\\"(.*)\\",.*\\"moonriseTimeLocal\\":.*\\"(.*)\\",\\"(.*)\\",.*,\\"moonsetTimeLocal\\":.*\\"(.*)\\",\\"(.*)\\",.*

DailyForecastTempMax=(?siU)\\"getSunV3DailyForecastWithHeadersUrlConfig\\":.*{.*\\"temperatureMax\\":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

DailyForecastTempMin=(?siU)\\"getSunV3DailyForecastWithHeadersUrlConfig\\":.*{.*\\"temperatureMin\\":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

DailyForecastDate=(?siU)\\"getSunV3DailyForecastWithHeadersUrlConfig\\":.*{.*\\"validTimeLocal\\":.*\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\"

DailyForecastDayPart=(?siU)\\"getSunV3DailyForecastWithHeadersUrlConfig\\":.*{.*\\"daypartName\\":(.*),\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\"

DailyForecastIconCode=(?siU)\\"getSunV3DailyForecastWithHeadersUrlConfig\\":.*{.*\\"iconCode\\":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

DailyForecastPrecip=(?siU)\\"getSunV3DailyForecastWithHeadersUrlConfig\\":.*{.*\\"precipChance\\":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

DailyForecastCondition=(?siU)\\"getSunV3DailyForecastWithHeadersUrlConfig\\":.*{.*\\"wxPhraseLong\\":(.*),\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\"

HourlyForecastIconCode=(?siU)\\"getSunV3HourlyForecastUrlConfig\\":.*{.*\\"iconCode\\":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

HourlyForecastTemp=(?siU)\\"getSunV3HourlyForecastUrlConfig\\":.*{.*\\"temperature\\":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

HourlyForecastHour=(?siU)\\"getSunV3HourlyForecastUrlConfig\\":.*{.*\\"validTimeLocal\\":.*\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\"

HourlyForecastCondition=(?siU)\\"getSunV3HourlyForecastUrlConfig\\":.*{.*\\"wxPhraseLong\\":(.*),\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\"

WeatherAlert=(?siU)\\"getSunWeatherAlertHeadlinesUrlConfig\\":.*{.*,\\"alerts\\":.*(?(?=.*{\\"detailKey\\").*:\\".*\\",.*,\\"eventDescription\\":\\"(.*)\\",\\"severityCode\\":(.*),\\"severity\\":\\"(.*)\\",.*,\\"headlineText\\":\\"(.*)\\",.*}).*(?(?=.*{\\"detailKey\\").*:\\".*\\",.*,\\"eventDescription\\":\\"(.*)\\",\\"severityCode\\":(.*),\\"severity\\":\\"(.*)\\",.*,\\"headlineText\\":\\"(.*)\\",.*}).*(?(?=.*{\\"detailKey\\").*:\\".*\\",.*,\\"eventDescription\\":\\"(.*)\\",\\"severityCode\\":(.*),\\"severity\\":\\"(.*)\\",.*,\\"headlineText\\":\\"(.*)\\",.*}).*(?(?=.*{\\"detailKey\\").*:\\".*\\",.*,\\"eventDescription\\":\\"(.*)\\",\\"severityCode\\":(.*),\\"severity\\":\\"(.*)\\",.*,\\"headlineText\\":\\"(.*)\\",.*}).*(?(?=.*{\\"detailKey\\").*:\\".*\\",.*,\\"eventDescription\\":\\"(.*)\\",\\"severityCode\\":(.*),\\"severity\\":\\"(.*)\\",.*,\\"headlineText\\":\\"(.*)\\",.*}).*(?(?=.*{\\"detailKey\\").*:\\".*\\",.*,\\"eventDescription\\":\\"(.*)\\",\\"severityCode\\":(.*),\\"severity\\":\\"(.*)\\",.*,\\"headlineText\\":\\"(.*)\\",.*}).*(?(?=.*{\\"detailKey\\").*:\\".*\\",.*,\\"eventDescription\\":\\"(.*)\\",\\"severityCode\\":(.*),\\"severity\\":\\"(.*)\\",.*,\\"headlineText\\":\\"(.*)\\",.*}).*(?(?=.*{\\"detailKey\\").*:\\".*\\",.*,\\"eventDescription\\":\\"(.*)\\",\\"severityCode\\":(.*),\\"severity\\":\\"(.*)\\",.*,\\"headlineText\\":\\"(.*)\\",.*}).*

WeatherParametersLabels=(?siU)\\"wxu-today-details\\":{.*,\\"feelsLike\\":\\"(.*)\\",\\"highLow\\":\\"(.*)\\",\\"wind\\":\\"(.*)\\",\\"humidity\\":\\"(.*)\\",\\"dewPoint\\":\\"(.*)\\",\\"pressure\\":\\"(.*)\\",\\"uvIndex\\":\\"(.*)\\",\\"visibility\\":\\"(.*)\\",\\"moonPhase\\":\\"(.*)\\",.*}

WeatherParametersUnits=(?siU)\\"wxu-general\\":{\\"noData\\":\\".*\\",\\"mph\\":\\"(.*)\\",\\"km/h\\":\\"(.*)\\",\\"in\\":\\"(.*)\\",\\"mb\\":\\"(.*)\\",\\"mi\\":\\"(.*)\\",\\"km\\":\\"(.*)\\",.*}