# HSGoogleDrivePicker
A sane and simple file picker for Google Drive.

Google makes it ridiculously painful to select a file from Google Drive. 

For many use-cases, all you want is to present a picker, and get a notification when your user has selected a file.

This is the API that Google should have written.


## Example

`#import “HS_GDrivePicker.h"`

```objective-c
    
HS_GDrivePicker *picker=[[HS_GDrivePicker alloc] initWithId:@"YOUR ID HERE"
                                                   secret:@"YOUR SECRET HERE"];
    
[picker pickFromViewController:self
                withCompletion:^(HSDriveManager *manager, GTLDriveFile *file) {
                        NSLog(@"selected: %@",file.title);
                    }];
```

## Getting Started

- Install HSGoogleDrivePicker via CocoaPods or by downloading the Source files
- Follow the Google guide to set up your API keys
- Run a picker.


---
##Installing HSGoogleDrivePicker

You can install HSGoogleDrivePicker in your project by using [CocoaPods](https://github.com/cocoapods/cocoapods)

You also need the Google API client (or you can copy the files manually following the instructions in the next section)

```Ruby
pod 'HSGoogleDrivePicker', '~> 0.1.0’
pod 'Google-API-Client', '~> 1.0'

```


## Getting your API keys

- Follow [Google’s guide](https://developers.google.com/drive/ios/quickstart) (Step 1 only).
- (If you prefer, you can download Google’s API code by following Step 2. This will allow you to ignore the Google-API-Client pod, which contains a lot of un-needed code.)
- Enable the Drive API permission. (click on ‘APIs and Auth’, ‘APIs’, then search for ‘Drive’) 



## Usage

Run the example code above using your keys.

The completion handler returns with a GTLDriveFile which has all the info you need. 

`#import "HS_GDrivePicker.h"`

```objective-c
    
HS_GDrivePicker *picker=[[HS_GDrivePicker alloc] initWithId:@"YOUR ID HERE"
                                                   secret:@"YOUR SECRET HERE"];
    
[picker pickFromViewController:self
                withCompletion:^(HSDriveManager *manager, GTLDriveFile *file) {
                        NSLog(@"selected: %@",file.title);
                    }];
```

To download the file, use 

```objective-c
       
[manager downloadFile:file
                                           toPath:fullPath
                            withCompletionHandler:^(NSError *error) {

	if (error)
	{
		NSLog(@"Error downloading”);
	}
}];
```

## Status

HSGoogleDrivePicker is simplistic and new, but I’m using it in production code. 

I welcome pull requests.

## License

HSGoogleDrivePicker is available under the MIT license. See the LICENSE file for more info.