//
//  AppDelegate.h
//  Example-iOS
//
//  Created by Christopher Galasso on 2/15/17.
//  Copyright © 2017 Christopher Galasso. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol OIDAuthorizationFlowSession;

/*! @brief The example application's delegate.
 */
@interface AppDelegate : UIResponder <UIApplicationDelegate>

/*! @brief The authorization flow session which receives the return URL from
 \SFSafariViewController.
 @discussion We need to store this in the app delegate as it's that delegate which receives the
 incoming URL on UIApplicationDelegate.application:openURL:options:. This property will be
 nil, except when an authorization flow is in progress.
 */
@property(nonatomic, strong, nullable) id<OIDAuthorizationFlowSession> currentAuthorizationFlow;

//@property (strong, nonatomic) UIWindow *window;


@end

