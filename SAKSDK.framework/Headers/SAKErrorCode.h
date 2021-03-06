//
//  SAKErrorCode.h
//  SAKSDK
//
//  Created by JUN XU on 5/8/19.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SAKErrorCode) {
    /*
     * Network error
     */
    SAKErrorNetworkError,
    /*
     * Cannot request ad due user not eligible
     */
    SAKErrorNotEligible,
    /*
     * Cannot parse response from network request
     */
    SAKErrorFailedToParse,
    /*
     * Cannot request ad due to SDK not ready
     */
    SAKErrorSDKNotInitialized,
    /*
     * No ad returned from server
     */
    SAKErrorNoAdAvailable,
    /*
     * Cannot find creative endpoint to download ad media
     */
    SAKErrorCodeNoCreativeEndpoint,
    /*
     * Media download error
     */
    SAKErrorCodeMediaDownloadError,
    /*
     * Failed to Register
     */
    SAKErrorFailedToRegister,
    /*
     * Ads are disabled
     */
    SAKErrorAdsDisabled,
};
