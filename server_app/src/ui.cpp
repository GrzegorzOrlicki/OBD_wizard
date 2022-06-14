incoming_command = CheckForIncomingCommands();
switch (incoming_command)
{
	case open_stat_mode:
		ShowFilters();
		ReceiveReports();
		ShowFilteredStatsFromDatabase();
		break;

	case real_time_mode:
		ShowCurrentVehicle();
		if (edit)
		{
			AddEditNote();
			SaveUndoChanges();
			
		}
		else	
		{
			EndSession();
		}
		break;
}


