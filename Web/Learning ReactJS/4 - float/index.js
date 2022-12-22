function SocialButton( props ){

    return (
        <a target="_blank" href={props.href} className="social-button" style={{
            background: props.bgcolor,
        }}>
            <span className="image" style={{
                backgroundImage: "url('" + props.image + "')"
            }}></span>
            <span className="brand-name"> { props.brandName } </span>
        </a>
    )
}

root = ReactDOM.createRoot( document.getElementById( "root" ) );
root.render( 
    <React.StrictMode>
        <div className="buttons-wrapper">
            <SocialButton href="https://youtube.com/c/Pikod" brandName="Youtube" bgcolor="rgb(255, 100, 100)" image="./youtube.png" />
            <SocialButton href="https://facebook.com/Pikod.vbs" brandName="Facebook" bgcolor="rgb(100, 100, 255)" image="./facebook.png" />
            <SocialButton href="https://twitter.com/hzpikod" brandName="Twitter" bgcolor="rgb(150, 150, 255)" image="./twitter.png" />
        </div>
    </React.StrictMode>
);