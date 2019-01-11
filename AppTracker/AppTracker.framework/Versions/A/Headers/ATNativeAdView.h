//
//  ATNativeAdView.h
//
//  Copyright © 2017 LeadBolt. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ATNativeAd.h"

@class ATNativeAdView;


@interface ATNativeAdView : UIView

// TODO: define properties here

@property (weak, nonatomic) IBOutlet UIButton *loadButton;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (weak, nonatomic) IBOutlet UIButton *callToActionButton;
@property (weak, nonatomic) IBOutlet UIImageView *mediaImageView;
@property (weak, nonatomic) IBOutlet UIImageView *iconImageView;


+(ATNativeAdView *)nativeAdViewWithAd:(ATNativeAd *)ad withType:(ATNativeAdViewType)type withViewController:(UIViewController *)vC;

@end
