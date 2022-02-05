public class Client
{
	public static void main(String[] args)
	{
		Phone phone = new Phone(12345678);
		phone.call();
		phone.changeState(PhoneState.SILENT);
		phone.call();
		phone.changeState(PhoneState.VIBRATORY);
		phone.call();
		phone.changeState(PhoneState.ACTIVE);
		phone.call();

	}
}
