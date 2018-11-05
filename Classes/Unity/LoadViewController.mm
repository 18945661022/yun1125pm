//
//  LoadViewController.m
//  Unity-iPhone
//
//  Created by Apple on 2017/12/17.
//

#import "LoadViewController.h"
#import "UnityAppController.h"

@interface LoadViewController ()
@property (retain, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;
//@property (retain, nonatomic) IBOutlet UIProgressView *progressView;
//@property (assign, nonatomic) BOOL progress_flag ;
//- (void)progressChanged;
@property (retain, nonatomic) IBOutlet UILabel *infoLabel;
@end

@implementation LoadViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    self.view.backgroundColor = [UIColor colorWithWhite:0 alpha:0];
    _activityIndicator.transform = CGAffineTransformMakeScale(3.0f, 3.0f);
    [_activityIndicator startAnimating];
    
    _infoLabel.adjustsFontSizeToFitWidth = YES;
    NSLog(@"lvc didload");
    //_progressView.transform = CGAffineTransformMakeScale(1.0f, 1.3f);
    //_progressView.layer.cornerRadius = 3.0;
    //_progressView.layer.masksToBounds = YES;
    //_progressView.progress = 0;
   // _progress_flag = NO;
    //UnityAppController* uac = GetAppController();
    //[uac performSelector:@selector(startUnity:) withObject:self afterDelay:0];
    //[NSTimer scheduledTimerWithTimeInterval:0.05 target:self selector:@selector(progressChanged) userInfo:nil repeats:YES];
    //NSThread *thread = [[NSThread alloc] initWithTarget:self selector:@selector(startEngine) object:nil];
    //[thread start];
    //
    //[uac startUnity:self];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewDidAppear:(BOOL)animated;{
    //UnityAppController* uac = GetAppController();
    //[uac startUnity:self];
    //[uac performSelector:@selector(startUnity:) withObject:self afterDelay:0];
}

/*/
- (void)startEngine{
    UnityAppController* uac = GetAppController();
    [uac startUnity:self];
}
/*/
/***
- (void)setProgress{
    //_progress_flag = YES;
    if(_progressView.progress<=1.0){
       _progressView.progress += 0.1;
        //[_progressView setProgress:0.3 animated:true];
        [_progressView layoutIfNeeded];
    }
}

- (void)progressChanged{
    if(_progressView.progress<=1.0){
        _progressView.progress += 0.001;
    }
    if(_progress_flag){
        _progressView.progress += 0.1;
        
        _progress_flag = NO;
        NSLog(@"set NO");
    }
}
***/
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

//屏蔽触摸
-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
}

-(void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
}

-(void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
}

-(void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
}

- (void)dealloc {
   // [_progressView release];
    NSLog(@"loadviewcontroller dealloc");
    [_activityIndicator release];
    [_infoLabel release];
    [super dealloc];
}
@end
