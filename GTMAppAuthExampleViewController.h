//
//  GTMAppAuthExampleViewController.h
//  Example-iOS
//
//  Created by Christopher Galasso on 2/15/17.
//  Copyright © 2017 Christopher Galasso. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OIDAuthState;
@class GTMAppAuthFetcherAuthorization;
@class OIDServiceConfiguration;

NS_ASSUME_NONNULL_BEGIN

/*! @brief The example application's view controller.
 */
@interface GTMAppAuthExampleViewController : UIViewController

@property(nullable) IBOutlet UIButton *authAutoButton;
@property(nullable) IBOutlet UIButton *userinfoButton;
@property(nullable) IBOutlet UIButton *clearAuthStateButton;
@property(nullable) IBOutlet UITextView *logTextView;

/*! @brief The authorization state.
 */
@property(nonatomic, nullable) GTMAppAuthFetcherAuthorization *authorization;

/*! @brief Authorization code flow using @c OIDAuthState automatic code exchanges.
 @param sender IBAction sender.
 */
- (IBAction)authWithAutoCodeExchange:(nullable id)sender;

/*! @brief Performs a Userinfo API call using @c GTMAppAuthFetcherAuthorization.
 @param sender IBAction sender.
 */
- (IBAction)userinfo:(nullable id)sender;

/*! @brief Nils the @c OIDAuthState object.
 @param sender IBAction sender.
 */
- (IBAction)clearAuthState:(nullable id)sender;

/*! @brief Clears the UI log.
 @param sender IBAction sender.
 */
- (IBAction)clearLog:(nullable id)sender;

@end

NS_ASSUME_NONNULL_END
