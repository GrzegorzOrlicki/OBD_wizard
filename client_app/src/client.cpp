create OBDAnchor OBD;
Initiate_OBD_connection(OBD);

create DatabaseAnchor database;
Initiate_DB_connection(database, user_credentials);

if (!database.is_connected)
{
	ShowLog("Database is not availible.", Error);
	EndSession();
}
else
{
	if (OBD.is_connected)
	{
		getReport -> create  NewReport_date_time;
		AskUserToInsertName();
		SendReport(database);
		OpenUserInterface();
	}
	else
	{
		ShowLog("OBD is not connected.", Error);
		EndSession();
	}
}