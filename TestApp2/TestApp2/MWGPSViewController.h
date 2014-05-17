//
//  MWGPSViewController.h
//  GPS
//
//  Created by Hackademy on 5/17/14.
//  Copyright (c) 2014 Dyn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface MWGPSViewController : UIViewController <CLLocationManagerDelegate>

@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) CLLocation *location;
@property (weak, nonatomic) IBOutlet UILabel *coordinateLat;
@property (weak, nonatomic) IBOutlet UILabel *coordinateLon;
@property (weak, nonatomic) IBOutlet UILabel *altitude;
@property (weak, nonatomic) IBOutlet UILabel *hAccuracy;
@property (weak, nonatomic) IBOutlet UILabel *vAccuracy;
@property (weak, nonatomic) IBOutlet UILabel *timestamp;
@property (weak, nonatomic) IBOutlet UILabel *cAltTemp;
@property (nonatomic) float altitudeval;

@end
