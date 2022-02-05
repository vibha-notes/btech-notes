public class Phone
{
	private int phoneNumber;
	private PhoneState phoneState;
	public Phone(int phoneNumber)
	{
		this.phoneNumber = phoneNumber;
		this.phoneState = PhoneState.ACTIVE;
	}
	public void disp()	
	{
		System.out.println(phoneNumber + ":" + phoneState);
	}
	public void changeState(PhoneState phoneState)
	{
		this.phoneState = phoneState;
	}
	public void call()
	{
		switch(phoneState)
		{
			case ACTIVE : 
					System.out.println("hello");
					break;
			case SILENT : 
					System.out.println("Sh....");
					break;
			case VIBRATORY :
					System.out.println("...---...");
					break;
					
		}
	}
	
	
}
enum PhoneState
{
	ACTIVE, SILENT, VIBRATORY;
}

